index.html
<!DOCTYPE html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Купить привилегии - Minecraft</title>
    <style>
        body {
            font-family: 'Arial', sans-serif;
            background: linear-gradient(120deg, #1a1a2e, #16213e);
            color: white;
            margin: 0;
            padding: 0;
            text-align: center;
        }

        header {
            background: rgba(0, 0, 0, 0.7);
            padding: 20px;
            font-size: 32px;
            text-shadow: 2px 2px 5px black;
        }

        .container {
            display: flex;
            justify-content: center;
            flex-wrap: wrap;
            gap: 20px;
            padding: 40px;
        }

        .card {
            background: rgba(255, 255, 255, 0.1);
            border-radius: 15px;
            padding: 20px;
            width: 280px;
            box-shadow: 0px 5px 15px rgba(0, 0, 0, 0.5);
            transition: transform 0.3s ease, box-shadow 0.3s ease;
            position: relative;
        }

        .card:hover {
            transform: scale(1.05);
            box-shadow: 0px 10px 30px rgba(0, 255, 255, 0.5);
        }

        .card h3 {
            font-size: 24px;
            margin-bottom: 10px;
        }

        .card p {
            font-size: 16px;
            margin-bottom: 15px;
        }

        .price {
            font-size: 22px;
            font-weight: bold;
            color: #ffeb3b;
            margin-bottom: 15px;
        }

        .buy-btn {
            background: #ff9800;
            color: white;
            padding: 10px 20px;
            font-size: 18px;
            border: none;
            border-radius: 10px;
            cursor: pointer;
            transition: background 0.3s ease;
        }

        .buy-btn:hover {
            background: #ff5722;
        }

        footer {
            background: rgba(0, 0, 0, 0.7);
            padding: 15px;
            font-size: 16px;
            margin-top: 30px;
        }
    </style>
</head>
<body>
    <header>
        <h1>Привилегии для Minecraft</h1>
        <p>Выберите привилегию и получите доступ к эксклюзивным возможностям!</p>
    </header>

    <div class="container">
        <div class="card">
            <h3>Вікінг</h3>
            <p>Специальные бонусы и команды.</p>
            <div class="price">19 грн</div>
            <button class="buy-btn" onclick="openModal()">Купить</button>
        </div>

        <div class="card">
            <h3>Креатив</h3>
            <p>Доступ к режиму творчества.</p>
            <div class="price">49 грн</div>
            <button class="buy-btn" onclick="openModal()">Купить</button>
        </div>

        <div class="card">
            <h3>Гл. Адм</h3>
            <p>Полный контроль сервера.</p>
            <div class="price">299 грн</div>
            <button class="buy-btn" onclick="openModal()">Купить</button>
        </div>
        
        <div class="card">
            <h3>Модератор</h3>
            <p>Доступ к управлению игроками и сервера.</p>
            <div class="price">По доверию</div>
            <button class="buy-btn" onclick="openModal()">Заявка</button>
        </div>
    </div>

    <footer>
        <p>Все покупки совершаются через Telegram: <strong>@danyachek2</strong></p>
    </footer>

    <script>
        function openModal() {
            alert("Все покупки совершаются через Telegram: @danyachek2");
        }
    </script>
</body>
</html>
